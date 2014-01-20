from django.http import HttpResponse
from django.template import Templaet,Context
import datetime

def hello(request):
	return HttpResponse("Hello World")

def datetime(request):
	now = datetime.datetime.now()
	html = "<html><body>It is now %s.</body></html>"%now
	return HttpResponse(html)

def hours_aheas(request, offset):
	try:
		offset = int(offset)
	except ValueError:
		raise Http404()
	assert False
	dt = datetime.datetime.now() + datetime.timedelta(hours=offset)
	html = "<html><body>In %s hours(s), it will be %s.</body></html>"%(offset,dt)
	return HttpResponse(html)

def current_datetime(request):

	now = datetime.datetime.now()
	t = Template("<html><body>It is now {{ current_date }}</body></html>")
	html = t.render(Context({'current_date':now}))
	return HttpResponse(html)

