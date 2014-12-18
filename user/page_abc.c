#include "esp_common.h"
#include "api_struct.h"

const char* ICACHE_FLASH_ATTR
page_abc(HTTPRequest *req, void *args)
{
	char *api_buffer = (char *)malloc(MAX_API_CONTENT);

	const char template[] = "<html><head><title>Test123</title></head><body><h1>istek tipi:%s</h1></body></html>";

	/* POST OR GET */
	if(0 == req->is_post)
	{
		/* GET */
		const char method[] = "GET";
		char *params = req->params;

		sprintf(api_buffer, template, method, params);
	} else {
		const char method[] = "POST";
		char *params = "";
		if (req->params)
			*(&params) = req->params;

		sprintf(api_buffer, template, method, params);
	}
	
	return api_buffer;
}
