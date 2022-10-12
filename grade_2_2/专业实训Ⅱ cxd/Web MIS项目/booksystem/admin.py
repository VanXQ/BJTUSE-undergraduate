from django.contrib import admin

from .forms import FlightForm
from .models import Flight


# 自定义表单管理
class FlightAdmin(admin.ModelAdmin):
    list_display = ('name', 'leave_city', 'arrive_city', 'leave_airport',
                    'arrive_airport', 'leave_time', 'arrive_time', 'capacity',
                    'price', 'book_sum', 'income')
    form = FlightForm  # 在FlightForm中自定义需要在后台中输入哪些信息


admin.site.site_header = '机票预定系统后台'   # 设置header

admin.site.site_title = '机票预定系统后台'  # 设置title

admin.site.index_title = '机票预定系统后台'

# Register your models here.
admin.site.register(Flight, FlightAdmin)
