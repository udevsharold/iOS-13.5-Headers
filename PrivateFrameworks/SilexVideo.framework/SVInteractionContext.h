/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVInteractionContext.h>
@class UIView;


@protocol SVInteractionContext <NSObject>
@property (nonatomic,readonly) UIView * sourceView; 
@property (nonatomic,readonly) CGRect sourceRect; 
@required
-(UIView *)sourceView;
-(CGRect)sourceRect;

@end


@class UIView, NSString;

@interface SVInteractionContext : NSObject <SVInteractionContext> {

	UIView* _sourceView;
	CGRect _sourceRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * sourceView;                 //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                   //@synthesize sourceRect=_sourceRect - In the implementation block
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(id)initWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
@end

