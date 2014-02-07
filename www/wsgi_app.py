#-*- conding: utf-8 -*-

import pprint
def wsgi_app(environ, start_response):
	output = pprint.pformat(environ)

	status = '200 OK'
	headers = [('Content-type', 'text/plain'),
				('Content-Length', str(len(output)))]

	start_response(status, headers)

	yield output

application = wsgi_app