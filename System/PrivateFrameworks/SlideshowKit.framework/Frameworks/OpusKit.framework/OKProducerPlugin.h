/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {

	Class _producerClass;
	long long _loadCounter;
	NSArray* _loadedClasses;
	OKProducerContent* _content;

}

@property (nonatomic,retain) OKProducerContent * content;              //@synthesize content=_content - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(BOOL)isLoaded;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)localizedName;
-(unsigned long long)family;
-(OKProducerContent *)content;
-(id)backgroundColor;
-(BOOL)_load;
-(void)setContent:(OKProducerContent *)arg1 ;
-(id)contentIdentifier;
-(id)audioURLs;
-(void)_unload;
-(void)setupJavascriptContext:(id)arg1 ;
-(id)exportedClassNames;
-(BOOL)hasLoadedClass:(Class)arg1 ;
-(double)minimumContentVersion;
-(id)producerWithPresentation:(id)arg1 ;
-(BOOL)loadRetain;
-(void)unloadRelease;
-(void)_bundleDidLoad:(id)arg1 ;
-(id)supportedResolutions;
-(BOOL)hasExportedClass:(Class)arg1 ;
@end

