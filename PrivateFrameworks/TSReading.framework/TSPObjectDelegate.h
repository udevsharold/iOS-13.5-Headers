/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSPObjectContext;


@protocol TSPObjectDelegate <TSPObjectModifyDelegate>
@property (nonatomic,readonly) TSPObjectContext * context; 
@required
-(TSPObjectContext *)context;
-(long long)modifyObjectTokenForNewObject;
-(long long)newObjectIdentifier;

@end

