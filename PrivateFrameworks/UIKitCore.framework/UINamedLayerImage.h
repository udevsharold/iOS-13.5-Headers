/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UINamedLayerImage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@optional
-(id)imageObj;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1;
-(id<UINamedLayerContentProvider>)contentProvider;

@required
-(NSString *)name;
-(CGRect)frame;
-(double)opacity;
-(int)blendMode;

@end

