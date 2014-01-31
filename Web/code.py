import web

urls = (
	'/', 'index'
)

class index:
	def GET(self):
		return "Hello,World!"

app = web.application(urls, globals())

if __name__ == "__main__":
	app.run()

