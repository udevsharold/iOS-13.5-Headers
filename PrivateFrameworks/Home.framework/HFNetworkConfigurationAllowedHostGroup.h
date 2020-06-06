/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet, NSSet;

@interface HFNetworkConfigurationAllowedHostGroup : NSObject {

	NSString* _name;
	unsigned long long _purpose;
	NSMutableSet* _mutableAddresses;
	NSMutableSet* _mutableAllowedHosts;

}

@property (nonatomic,copy) NSMutableSet * mutableAddresses;                              //@synthesize mutableAddresses=_mutableAddresses - In the implementation block
@property (assign,nonatomic) unsigned long long purpose;                                 //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,copy) NSMutableSet * mutableAllowedHosts;                           //@synthesize mutableAllowedHosts=_mutableAllowedHosts - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSSet * addresses; 
@property (nonatomic,copy,readonly) NSSet * allowedHosts; 
@property (nonatomic,copy,readonly) NSString * purposeLocalizedDescription; 
+(id)groupsForNetworkConfigurationProfiles:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setPurpose:(unsigned long long)arg1 ;
-(unsigned long long)purpose;
-(NSSet *)addresses;
-(NSSet *)allowedHosts;
-(void)addAllowedHost:(id)arg1 ;
-(NSMutableSet *)mutableAddresses;
-(NSMutableSet *)mutableAllowedHosts;
-(NSString *)purposeLocalizedDescription;
-(void)setMutableAddresses:(NSMutableSet *)arg1 ;
-(void)setMutableAllowedHosts:(NSMutableSet *)arg1 ;
@end

