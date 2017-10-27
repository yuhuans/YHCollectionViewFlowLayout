//
//  YHCollectionViewFlowLayout.h
//  YHCollectionViewFlowLayout
//
//  Created by apple on 27/10/17.
//  Copyright © 2017年 于欢. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol YHCollectionViewDelegateFlowLayout <UICollectionViewDelegateFlowLayout>

- (UIColor *)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout colorForSectionAtIndex:(NSInteger)section;
@end


@interface YHCollectionViewFlowLayout : UICollectionViewFlowLayout

@end
