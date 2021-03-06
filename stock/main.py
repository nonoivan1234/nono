import requests
import numpy as np
import pandas as pd
import json
import matplotlib.pyplot as plt

url = "https://query1.finance.yahoo.com/v8/finance/chart/2330.TW"
r = requests.get(url)

data = json.loads(r.text)
df = pd.DataFrame(
    data["chart"]["result"][0]["indicators"]["quote"][0],
    index=pd.to_datetime(
        np.array(data["chart"]["result"][0]["timestamp"]) * 1000 * 1000 * 1000
    ),
)

print(df.head())
