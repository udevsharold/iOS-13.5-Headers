/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSXPCEncoding <NSObject>
@required
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2;
-(void)encodeObject:(id)arg1 forKey:(id)arg2;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2;

@end
