#include "rss_reader.h"

int main(int argc, char **argv)
{
    RssReader rss(4000);
    rss.parseRss("coolshell.xml");
    rss.store("pagelib.txt");
    return 0;
}

