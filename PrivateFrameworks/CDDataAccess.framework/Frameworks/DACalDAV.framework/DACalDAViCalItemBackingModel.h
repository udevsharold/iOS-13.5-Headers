/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class REMObjectID, NSString;


@protocol DACalDAViCalItemBackingModel <NSObject>
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) NSString * daCalendarItemUniqueIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@required
-(REMObjectID *)objectID;
-(NSString *)externalModificationTag;
-(NSString *)daCalendarItemUniqueIdentifier;
-(id)updatableBackingModel;

@end

