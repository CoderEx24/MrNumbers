#include <check.h>
#include <cstdlib>
#include "core/linked_list.h"

START_TEST(test_linked_list)
{
    LinkedList *list = linked_list_new(5);
    ck_assert_ptr_nonnull(list);
    ck_assert_int_eq(list->n, 5);
    linked_list_free(list);
    ck_assert_null(list);
}
END_TEST
