#include "esp_common.h"
#include "api_struct.h"

const char* ICACHE_FLASH_ATTR
page_404(HTTPRequest *req, void *args)
{
	char *api_buffer = (char *)malloc(MAX_API_CONTENT);
	strcpy(api_buffer, "<html><head><title>test</title></head><body>404 Not Found</body></html>");
	return api_buffer;
}