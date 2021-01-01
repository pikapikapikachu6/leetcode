/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check(struct TreeNode* left, struct TreeNode* right) {
    if (left == NULL && right == NULL) {
        return true;
    } else if (left == NULL || right == NULL) {
        return false;
    } else if (left == right) {
        return check(left->left, right->right);
    } else {
        if (left->val != right->val) {
            return false;
        }
        if (!check(left->left, right->right)) {
            return false;
        }
        if (!check(left->right, right->left)) {
            return false;
        }
        return true;
    }
}


bool isSymmetric(struct TreeNode* root){
    return check(root, root);    
}
返回该题
力扣 LeetCode
竞赛
LeetBook
讨论社区
求职
Plus 会员
周边商城
企业服务
在线面试
企业测评
招聘
培训
解决方案
商务
社区合作
活动
赞助竞赛
产品推广
关于我们
价值观
工作机会
商务咨询问题反馈加入我们使用条款隐私政策© 2021 领扣网络（上海）有