//
//  QSOrderDetailViewController.h
//  suntry
//
//  Created by CoolTea on 15/2/27.
//  Copyright (c) 2015年 广州七升网络科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QSOrderDetailDataModel.h"

@interface QSOrderDetailViewController : UIViewController

@property (nonatomic, strong) QSOrderDetailDataModel *orderData;
@property (nonatomic, strong) NSString *order_ID;

@end
