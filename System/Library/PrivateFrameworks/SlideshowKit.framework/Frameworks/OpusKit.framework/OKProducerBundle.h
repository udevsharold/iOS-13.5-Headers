/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSBundle, NSDictionary, NSString;

@interface OKProducerBundle : NSObject {

	NSURL* _url;
	NSBundle* _bundle;
	NSDictionary* _infoDictionary;
	unsigned long long _type;
	NSString* _bundleExtension;

}

@property (nonatomic,retain) NSString * bundleExtension;              //@synthesize bundleExtension=_bundleExtension - In the implementation block
@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(id)identifier;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)infoDictionary;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(double)version;
-(id)url;
-(id)bundle;
-(id)initWithURL:(id)arg1 bundleType:(unsigned long long)arg2 ;
-(NSString *)bundleExtension;
-(void)setBundleExtension:(NSString *)arg1 ;
@end
