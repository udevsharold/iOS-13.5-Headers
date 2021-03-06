/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTPlanTransferAttributes : NSObject <NSSecureCoding> {

	unsigned long long _transferCapability;
	unsigned long long _transferStatus;

}

@property (assign,nonatomic) unsigned long long transferCapability;              //@synthesize transferCapability=_transferCapability - In the implementation block
@property (assign,nonatomic) unsigned long long transferStatus;                  //@synthesize transferStatus=_transferStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)transferCapability;
-(unsigned long long)transferStatus;
-(id)initWithTransferCapability:(unsigned long long)arg1 transferStatus:(unsigned long long)arg2 ;
-(void)setTransferCapability:(unsigned long long)arg1 ;
-(void)setTransferStatus:(unsigned long long)arg1 ;
@end

