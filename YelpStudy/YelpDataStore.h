//
//  YelpDataStore.h
//  YelpStudy
//
//  Created by Cary Zhang on 8/8/17.
//  Copyright © 2017 Cary Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"
@import CoreLocation;

@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end

