//
//  YJTipCell.h
//  baidumap
//
//  Created by 于英杰 on 2019/4/24.
//  Copyright © 2019 YYJ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YJTipCell : UITableViewCell
@property(nonatomic,copy)void (^typeBlock)(NSInteger type);
@end

NS_ASSUME_NONNULL_END
