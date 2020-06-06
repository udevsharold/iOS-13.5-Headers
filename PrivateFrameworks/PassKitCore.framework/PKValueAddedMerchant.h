/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding> {

	NSData* _identifier;
	long long _timesPresented;

}

@property (nonatomic,retain) NSData * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long timesPresented;              //@synthesize timesPresented=_timesPresented - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(long long)timesPresented;
-(void)setTimesPresented:(long long)arg1 ;
@end

