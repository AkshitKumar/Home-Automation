import MySQLdb
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)
GPIO.setup(3,GPIO.OUT)
#db = MySQLdb.connect("localhost","root",'',"homeautomate")
#cursor = db.cursor()
sql = "SELECT status FROM homeautomate.toggle WHERE buttonname = 'LED'"
try:
	while 1:
		time.sleep(5)
		db = MySQLdb.connect('localhost','root','',"homeautomate")
		cursor = db.cursor()
		#time.sleep(5)
		cursor.execute(sql)
		results = cursor.fetchall()
		for row in results:
			print row
			status = str(row)
			if status == "('on',)":
				GPIO.output(3,True)
			elif status =="('off',)":
				GPIO.output(3,False)
except KeyboardInterrupt:
	GPIO.cleanup()