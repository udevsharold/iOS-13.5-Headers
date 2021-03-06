/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFileProviderItemFlags <NSObject>
@property (getter=isUserExecutable,nonatomic,readonly) BOOL userExecutable; 
@property (getter=isUserReadable,nonatomic,readonly) BOOL userReadable; 
@property (getter=isUserWritable,nonatomic,readonly) BOOL userWritable; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isPathExtensionHidden,nonatomic,readonly) BOOL pathExtensionHidden; 
@required
-(BOOL)isHidden;
-(BOOL)isPathExtensionHidden;
-(BOOL)isUserReadable;
-(BOOL)isUserWritable;
-(BOOL)isUserExecutable;

@end

