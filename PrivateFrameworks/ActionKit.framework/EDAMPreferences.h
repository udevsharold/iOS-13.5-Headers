/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:39 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSDictionary;

@interface EDAMPreferences : FATObject {

	NSNumber* _updateSequenceNum;
	NSDictionary* _preferences;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSDictionary * preferences;                //@synthesize preferences=_preferences - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setPreferences:(NSDictionary *)arg1 ;
-(NSDictionary *)preferences;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end

