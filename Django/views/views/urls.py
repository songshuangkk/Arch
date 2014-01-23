from django.conf.urls import patterns, include, url
from html.views import display_meta
from html.views import search_form
from html.views import search

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'views.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),

    url(r'^admin/', include(admin.site.urls)),
	url(r'^$', display_meta),
	url(r'^search-form/$', search_form),
	url(r'^search/$', search),
)
