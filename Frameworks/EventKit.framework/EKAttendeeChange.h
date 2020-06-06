/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKParticipantChange.h>
#import <libobjc.A.dylib/EKOwnerIDProviding.h>

@class EKObjectID;

@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding> {

	EKObjectID* _ownerID;

}

@property (nonatomic,readonly) EKObjectID * ownerID;              //@synthesize ownerID=_ownerID - In the implementation block
+(int)entityType;
+(void)fetchAttendeeChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchAttendeeChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchAttendeeChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(EKObjectID *)ownerID;
-(id)initWithChangeProperties:(id)arg1 ;
@end

