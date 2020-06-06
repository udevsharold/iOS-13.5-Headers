/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, NSArray;

@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable> {

	BOOL _canGenerateDocument;
	NSString* _userActivityTitle;
	NSArray* _contentRects;

}

@property (nonatomic,copy) NSString * userActivityTitle;                    //@synthesize userActivityTitle=_userActivityTitle - In the implementation block
@property (nonatomic,copy) NSArray * contentRects;                          //@synthesize contentRects=_contentRects - In the implementation block
@property (assign,nonatomic) BOOL canGenerateDocument;                      //@synthesize canGenerateDocument=_canGenerateDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSArray *)contentRects;
-(NSString *)userActivityTitle;
-(NSString *)loggableDescription;
-(void)setUserActivityTitle:(NSString *)arg1 ;
-(void)setContentRects:(NSArray *)arg1 ;
-(BOOL)canGenerateDocument;
-(void)setCanGenerateDocument:(BOOL)arg1 ;
@end

