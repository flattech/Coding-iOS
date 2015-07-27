//
//  CSTopiclistView.h
//  Coding_iOS
//
//  Created by pan Shiyu on 15/7/24.
//  Copyright (c) 2015年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"
#import "CSTopic.h"

typedef void(^TopicListViewBlock)(NSDictionary* topic);
typedef enum {
    CSMyTopicsTypeWatched,
    CSMyTopicsTypeJoined,
}CSMyTopicsType;

@interface CSTopiclistView : UIView<UITableViewDataSource, UITableViewDelegate>

- (id)initWithFrame:(CGRect)frame type:(CSMyTopicsType )type block:(TopicListViewBlock)block;
- (void)setTopics:(id )topics;
- (void)refreshUI;
- (void)refreshToQueryData;

@end

