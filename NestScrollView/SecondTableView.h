//
//  SecondTableView.h
//  NestScrollView
//
//  Created by ZB on 2022/7/18.
//

#import <UIKit/UIKit.h>

#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height

NS_ASSUME_NONNULL_BEGIN

@interface SecondTableView : UITableView

@property (assign, nonatomic) CGFloat topViewH;
@property (assign, nonatomic) CGFloat itemViweH;

/// scrollViewDidScroll 回调
@property void(^scrollBlock)(UIScrollView *scrollView);

@end

NS_ASSUME_NONNULL_END
