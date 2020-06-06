/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@class NSString;

@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {

	BOOL _imageIsNamed;

}

@property (assign,nonatomic) BOOL imageIsNamed;                     //@synthesize imageIsNamed=_imageIsNamed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)archiver:(id)arg1 didEncodeObject:(id)arg2 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(BOOL)imageIsNamed;
-(void)setImageIsNamed:(BOOL)arg1 ;
@end

