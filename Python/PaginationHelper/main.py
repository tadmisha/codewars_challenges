class PaginationHelper:
    # The constructor takes in an array of items and an integer indicating
    # how many items fit within a single page
    def __init__(self, collection, items_per_page):
        self.collection = collection
        self.items_per_page = items_per_page
        self.item_amount = len(self.collection)
        flcount = self.item_amount/self.items_per_page

        self.page_amount = int(flcount) if (flcount==int(flcount)) else int(flcount)+1
        
    # returns the number of items within the entire collection
    def item_count(self):
        return self.item_amount
    
    # returns the number of pages
    def page_count(self):
        return self.page_amount
        
    # returns the number of items on the given page. page_index is zero based
    # this method should return -1 for page_index values that are out of range
    def page_item_count(self, page_index):
        if (page_index+1 > self.page_amount) or (page_index<0): return -1
        return self.items_per_page if (page_index!=self.page_amount-1) else (self.item_amount-self.items_per_page*page_index)
    
    # determines what page an item at the given index is on. Zero based indexes.
    # this method should return -1 for item_index values that are out of range
    def page_index(self, item_index):
        if (item_index+1 > self.item_amount) or (item_index<0): return -1
        flpage = item_index/self.items_per_page
        return int(flpage) if (flpage==int(flpage)) else int(flpage)