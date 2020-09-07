/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTIMSRegistrationStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRegisteredForVoice;
	BOOL _isRegisteredForSMS;

}

@property (assign,nonatomic) BOOL isRegisteredForVoice;              //@synthesize isRegisteredForVoice=_isRegisteredForVoice - In the implementation block
@property (assign,nonatomic) BOOL isRegisteredForSMS;                //@synthesize isRegisteredForSMS=_isRegisteredForSMS - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRegisteredForVoice;
-(BOOL)isRegisteredForSMS;
-(void)setIsRegisteredForVoice:(BOOL)arg1 ;
-(void)setIsRegisteredForSMS:(BOOL)arg1 ;
@end
