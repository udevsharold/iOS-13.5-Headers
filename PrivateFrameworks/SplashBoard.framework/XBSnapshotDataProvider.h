/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class XBSnapshotDataProviderContext;


@protocol XBSnapshotDataProvider <NSObject>
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
@optional
-(BOOL)hasProtectedContent;
-(void)invalidateImage;
-(id)fetchImageData:(out CGAffineTransform*)arg1;
-(id)fetchImage;
-(id)fallbackSnapshotDataProvider;

@required
-(XBSnapshotDataProviderContext *)context;

@end

