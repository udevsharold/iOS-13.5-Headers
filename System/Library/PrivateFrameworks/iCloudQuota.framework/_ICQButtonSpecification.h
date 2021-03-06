/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ICQLink, NSString;

@interface _ICQButtonSpecification : NSObject {

	NSDictionary* _serverDict;
	ICQLink* _buttonLink;
	NSString* _buttonFormat;
	NSDictionary* _linkForBundleIdentifier;

}

@property (nonatomic,readonly) NSString * buttonFormat;                           //@synthesize buttonFormat=_buttonFormat - In the implementation block
@property (nonatomic,readonly) ICQLink * buttonLink; 
@property (nonatomic,retain) NSDictionary * linkForBundleIdentifier;              //@synthesize linkForBundleIdentifier=_linkForBundleIdentifier - In the implementation block
+(id)buttonSpecificationSampleForLevel:(long long)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(ICQLink *)buttonLink;
-(id)linkForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)linkForBundleIdentifier;
-(NSString *)buttonFormat;
-(void)setLinkForBundleIdentifier:(NSDictionary *)arg1 ;
@end

