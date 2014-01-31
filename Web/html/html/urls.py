from django.conf.urls import patterns, include, url
from django.conf import settings
from django.conf.urls.static import static

from image.views import image
from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'html.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),

    url(r'^admin/', include(admin.site.urls)),
	url(r'^$', image),
) + static(settings.STATIC_URL, document_root = settings.STATIC_ROOT)
