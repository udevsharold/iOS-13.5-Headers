/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AEGridOverlayConfiguration : NSObject {

	BOOL _showVideoDecoration;
	BOOL _showCloudDecoration;
	BOOL _showLoopDecoration;

}

@property (nonatomic,readonly) BOOL showVideoDecoration;              //@synthesize showVideoDecoration=_showVideoDecoration - In the implementation block
@property (nonatomic,readonly) BOOL showCloudDecoration;              //@synthesize showCloudDecoration=_showCloudDecoration - In the implementation block
@property (nonatomic,readonly) BOOL showLoopDecoration;               //@synthesize showLoopDecoration=_showLoopDecoration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithShowCloudDecoration:(BOOL)arg1 showVideoDecoration:(BOOL)arg2 showLoopDecoration:(BOOL)arg3 ;
-(BOOL)showVideoDecoration;
-(BOOL)showCloudDecoration;
-(BOOL)showLoopDecoration;
@end

