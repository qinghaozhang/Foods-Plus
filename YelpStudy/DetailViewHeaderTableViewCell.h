//
//  DetailViewHeaderTableViewCell.h
//  YelpStudy
//
//  Created by Cary Zhang on 8/9/17.
//  Copyright © 2017 Cary Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
