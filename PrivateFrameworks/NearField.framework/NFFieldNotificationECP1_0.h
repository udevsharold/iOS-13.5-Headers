/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFFieldNotification.h>

@interface NFFieldNotificationECP1_0 : NFFieldNotification {

	BOOL _odaRequired;
	unsigned _terminalMode;
	unsigned _terminalType;

}

@property (readonly) BOOL odaRequired;                   //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned terminalMode;              //@synthesize terminalMode=_terminalMode - In the implementation block
@property (readonly) unsigned terminalType;              //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)terminalMode;
-(unsigned)terminalType;
-(BOOL)odaRequired;
@end

