/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding> {

	NSData* _primaryMACAddress;
	NSArray* _additionalMACAddresses;

}

@property (nonatomic,readonly) NSData * primaryMACAddress;                    //@synthesize primaryMACAddress=_primaryMACAddress - In the implementation block
@property (nonatomic,readonly) NSArray * additionalMACAddresses;              //@synthesize additionalMACAddresses=_additionalMACAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)primaryMACAddress;
-(id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2 ;
-(NSArray *)additionalMACAddresses;
@end

