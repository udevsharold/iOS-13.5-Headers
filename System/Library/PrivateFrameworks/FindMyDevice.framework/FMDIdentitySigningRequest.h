/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding> {

	BOOL _useSCRT;
	NSData* _dataToSign;
	long long _validityInMinutes;

}

@property (nonatomic,retain) NSData * dataToSign;                      //@synthesize dataToSign=_dataToSign - In the implementation block
@property (assign,nonatomic) BOOL useSCRT;                             //@synthesize useSCRT=_useSCRT - In the implementation block
@property (assign,nonatomic) long long validityInMinutes;              //@synthesize validityInMinutes=_validityInMinutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setDataToSign:(NSData *)arg1 ;
-(void)setValidityInMinutes:(long long)arg1 ;
-(void)setUseSCRT:(BOOL)arg1 ;
-(NSData *)dataToSign;
-(long long)validityInMinutes;
-(BOOL)useSCRT;
@end
