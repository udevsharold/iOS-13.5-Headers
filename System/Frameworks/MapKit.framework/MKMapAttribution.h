/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSURL, UIImage, NSString;

@interface MKMapAttribution : NSObject {

	NSAttributedString* _string;
	NSURL* _url;
	UIImage* _providerImage;
	NSString* _providerString;
	NSString* _providerName;

}

@property (nonatomic,readonly) NSString * providerString;                //@synthesize providerString=_providerString - In the implementation block
@property (nonatomic,readonly) UIImage * providerImage;                  //@synthesize providerImage=_providerImage - In the implementation block
@property (nonatomic,readonly) NSString * providerName;                  //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,readonly) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
+(id)attributionUrlFromRegionalAttributions:(id)arg1 ;
-(NSAttributedString *)string;
-(NSURL *)url;
-(NSString *)providerName;
-(UIImage *)providerImage;
-(id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 underlineText:(BOOL)arg3 applyLinkAttribution:(BOOL)arg4 scale:(double)arg5 ;
-(id)attributedStringWithImage:(id)arg1 ;
-(id)disclosureArrow;
-(NSString *)providerString;
@end

