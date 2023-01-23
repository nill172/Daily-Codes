
    // printf("1st");
    str* ptr = h;
    h = h->link;
    free(ptr);

    return h;
}
