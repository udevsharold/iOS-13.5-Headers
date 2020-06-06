/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSMutableArray;

@interface KTAccount : NSObject <NSSecureCoding> {

	NSData* _accountID;
	NSMutableArray* _devices;

}

@property (retain) NSData * accountID;                    //@synthesize accountID=_accountID - In the implementation block
@property (retain) NSMutableArray * devices;              //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)devices;
-(void)setDevices:(NSMutableArray *)arg1 ;
-(NSData *)accountID;
-(void)setAccountID:(NSData *)arg1 ;
-(id)initWithMutation:(id)arg1 ;
-(id)deviceForDeviceIdVRFOutput:(id)arg1 ;
-(void)addDevicesObject:(id)arg1 ;
-(BOOL)updateWithMutation:(id)arg1 error:(id*)arg2 ;
-(void)removeDevicesObject:(id)arg1 ;
-(id)initWithAccountId:(id)arg1 ;
@end

