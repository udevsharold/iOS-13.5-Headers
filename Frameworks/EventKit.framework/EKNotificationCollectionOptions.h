/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKSource, NSString;

@interface EKNotificationCollectionOptions : NSObject {

	EKSource* _source;
	NSString* _externalID;
	NSString* _externalIDTag;

}

@property (nonatomic,readonly) EKSource * source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                 //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSString * externalIDTag;              //@synthesize externalIDTag=_externalIDTag - In the implementation block
-(id)description;
-(EKSource *)source;
-(NSString *)externalID;
-(NSString *)externalIDTag;
-(id)initWithExternalID:(id)arg1 externalIDTag:(id)arg2 inSource:(id)arg3 ;
@end

