!pip install twilio

# Download the helper library from https://www.twilio.com/docs/python/install
import twilio
import os
from twilio.rest import Client


# Find your Account SID and Auth Token at twilio.com/console
# and set the environment variables. See http://twil.io/secure

!pip install --upgrade -q gspread


import gspread
import pandas as pd
from google.colab import auth
auth.authenticate_user()
from google.auth import default

creds, _ = default()
gc = gspread.authorize(creds)


worksheet = gc.open('IFTTT_Maker_Webhooks_Events').sheet1
rows = worksheet.get_all_values()
df=pd.DataFrame.from_records(rows)
import requests
import sys

while True:
  creds, _ = default()
  gc = gspread.authorize(creds)


  worksheet = gc.open('IFTTT_Maker_Webhooks_Events').sheet1
  rows = worksheet.get_all_values()
  df=pd.DataFrame.from_records(rows)
  check=True
  try:
    for v in df[3]:
      print(v)
      if v=="1":
        y=requests.get("https://maker.ifttt.com/trigger/theftsensor/with/key/hleiEMS-SlcwEJ24woQ-4ZQZiN2TKDfufRrIKSF9Iwj")
        account_sid = 'ACdb2cc59b5fe6524a283ad55f06b042c1'
        auth_token = 'ab030fbb88915e7c8b4ee26e36247304'
        client = Client(account_sid, auth_token)
        call = client.calls.create(
                        method='GET',
                        send_digits='1234#',
                        url='http://demo.twilio.com/docs/voice.xml',
                        to='+918778398859',
                        from_='+919390151428'
                    )

        print(call.sid)
        check=False
        
    if check==False:
      break

  
  except:
    pass