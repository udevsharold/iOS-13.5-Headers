/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryCallToAction;

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf {

	BOOL _useImageAsTitle;
	PKDiscoveryCallToAction* _callToAction;

}

@property (nonatomic,readonly) PKDiscoveryCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,readonly) BOOL useImageAsTitle;                                //@synthesize useImageAsTitle=_useImageAsTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(PKDiscoveryCallToAction *)callToAction;
-(BOOL)useImageAsTitle;
@end

