//
//  MapTableViewCell.h
//  YelpStudy
//
//  Created by Cary Zhang on 8/10/17.
//  Copyright © 2017 Cary Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface MapTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end

