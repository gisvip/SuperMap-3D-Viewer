//
//  FavoritesManageCell.h
//  SuperMap 3D Viewer
//
//  Created by zyd on 16/3/21.
//  Copyright © 2016年 zyd. All rights reserved.
//

#import "MGSwipeTableCell.h"

@class FavoritesSettingModel;
@interface FavoritesManageCell : MGSwipeTableCell

- (void)refreshCell:(FavoritesSettingModel *)model;

@end
