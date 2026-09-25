#include <drogon/drogon.h>

int main()
{
    drogon::app()
        .registerHandler(
            "/health",
            [](const drogon::HttpRequestPtr&,
               std::function<void(const drogon::HttpResponsePtr&)>&& callback)
            {
                auto resp = drogon::HttpResponse::newHttpResponse();
                resp->setBody("LoreBase API alive");
                callback(resp);
            })
        .addListener("0.0.0.0", 8000)
        .run();

    return 0;
}