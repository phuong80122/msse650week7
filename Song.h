//
//  Song.h
//  IT-CoreData
//
//  Created by Phuong Nguyen on 2/22/15.
//  Copyright (c) 2015 msse650. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Song : NSManagedObject

@property (nonatomic, retain) NSString * stitle;
@property (nonatomic, retain) NSString * skey;
@property (nonatomic, retain) NSString * slyric;

@end
