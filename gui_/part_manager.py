from  tkinter import *
from db import Database
from tkinter import messagebox

db = Database('store.db')

def populate_list():
    parts_list.delete(0,END)
    for row in db.fetch():
        parts_list.insert(END, row)
        
def add_item():
    if part_text.get()=='' or customer_text.get()=='' or Retailer_text.get()=='' or Price_text.get()=='' :
            messagebox.showerror('Required Fields', 'Please include all fields')
            return
    db.insert(part_text.get(), customer_text.get(), Retailer_text.get(), Price_text.get())
    parts_list.delete(0,END)
    parts_list.insert(END,(part_text.get(), customer_text.get(), Retailer_text.get(), Price_text.get()))    
    clear_text()
    populate_list()

def selcet_item(event):
    try:
        global selected_item
        index = parts_list.curselection()[0]
        selected_item = parts_list.get(index)
        
        
        part_entry.delete(0,END)
        part_entry.insert(END, selected_item[1])
        
        customer_entry.delete(0,END)
        customer_entry.insert(END, selected_item[2])
        
        Retailer_entry.delete(0,END)
        Retailer_entry.insert(END, selected_item[3])
        
        Price_entry.delete(0,END)
        Price_entry.insert(END, selected_item[4])
    except IndexError:
        pass
    
def remove_item():
    db.remove(selected_item[0])
    populate_list()
    
def update_item():
    db.update(selected_item[0],part_text.get(), customer_text.get(), Retailer_text.get(), Price_text.get())
    populate_list()


def clear_text():
    part_entry.delete(0, END)
    customer_entry.delete(0, END)
    Retailer_entry.delete(0, END)
    Price_entry.delete(0, END)
    
    
# Create window object
app=Tk()

# Part
part_text = StringVar()
part_label = Label(app, text='Part Name', font=('bold',14),pady=20)
part_label.grid(row=0, column=0, sticky=W)
part_entry = Entry(app, textvariable=part_text)
part_entry.grid(row=0, column=1)
# Customer
customer_text = StringVar()
customer_label = Label(app, text='Customer', font=('bold',14))
customer_label.grid(row=0, column=2, sticky=W)
customer_entry = Entry(app, textvariable=customer_text)
customer_entry.grid(row=0, column=3)
# Retailer
Retailer_text = StringVar()
Retailer_label = Label(app, text='Retailer', font=('bold',14))
Retailer_label.grid(row=1, column=0, sticky=W)
Retailer_entry = Entry(app, textvariable=Retailer_text)
Retailer_entry.grid(row=1, column=1)
# Price
Price_text = StringVar()
Price_label = Label(app, text='Price', font=('bold',14))
Price_label.grid(row=1, column=2, sticky=W)
Price_entry = Entry(app, textvariable=Price_text)
Price_entry.grid(row=1, column=3)
# Price List (List Box)
parts_list = Listbox(app, height=8, width=50, border=0)
parts_list.grid(row=3, column=0, columnspan=3 ,rowspan=6, pady=20, padx=20)
# Create scrollbox
scrollbox = Scrollbar(app)
scrollbox.grid(row=3, column=3)
# Set scroll to listbox
parts_list.configure(yscrollcommand=scrollbox.set)
scrollbox.configure(command=parts_list.yview)
# Bind select
parts_list.bind('<<ListboxSelect>>', selcet_item)

# Buttons
add_btn = Button(app, text='Add Part', width=12, command=add_item)
add_btn.grid(row=2, column=0, pady=20)

remove_btn = Button(app, text='Remove Part', width=12, command=remove_item)
remove_btn.grid(row=2, column=1)

update_btn = Button(app, text='Update Part', width=12, command=update_item)
update_btn.grid(row=2, column=2)

clear_btn = Button(app, text='Clear Part', width=12, command=clear_text)
clear_btn.grid(row=2, column=3)

app.title('Part Manager')
app.geometry('700x350')

# Populate data
populate_list()

# Start program
app.mainloop()