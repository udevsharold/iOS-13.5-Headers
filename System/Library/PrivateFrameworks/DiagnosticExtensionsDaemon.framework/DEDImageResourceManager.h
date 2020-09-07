/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ResourceLoader, NSMutableDictionary;

@interface DEDImageResourceManager : NSObject {

	ResourceLoader* _loader;
	NSMutableDictionary* _imageCache;

}

@property (retain) ResourceLoader * loader;                       //@synthesize loader=_loader - In the implementation block
@property (retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(ResourceLoader *)loader;
-(void)setLoader:(ResourceLoader *)arg1 ;
-(void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)cachedImageFromKey:(id)arg1 ;
@end
